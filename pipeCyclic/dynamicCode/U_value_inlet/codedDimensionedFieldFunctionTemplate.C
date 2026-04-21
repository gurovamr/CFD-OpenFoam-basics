/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) YEAR OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "codedDimensionedFieldFunctionTemplate.H"
#include "read.H"

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

namespace Foam
{
namespace DimensionedFieldFunctions
{
    defineTypeNameAndDebug
    (
        U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField,
        0
    );
}

DimensionedFieldFunction<DimensionedFvPatchVectorField>::
addRemovabledictionaryConstructorToTable
<
    DimensionedFieldFunctions::
    U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField
>
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorFieldConstructorToTable_;

}


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

extern "C"
{
    // Unique function name that can be checked
    // to ensure the correct library version has been loaded
    void U_value_inlet_345a5c629a9b2228817acb6eace04ec420dc0eae(bool load)
    {
        if (load)
        {
            // code that can be explicitly executed after loading
        }
        else
        {
            // code that can be explicitly executed before unloading
        }
    }
}


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::DimensionedFieldFunctions::
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField::
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField
(
    const dictionary& dict,
    DimensionedFvPatchVectorField& field_
)
:
    DimensionedFieldFunction<DimensionedFvPatchVectorField>(dict, field_),
    field(field_)
{
    if (false)
    {
        Info<< "Construct U_value_inlet sha1: 345a5c629a9b2228817acb6eace04ec420dc0eae from dictionary\n";
    }
}


Foam::DimensionedFieldFunctions::
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField::
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField
(
    const U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField& dff,
    DimensionedFvPatchVectorField& field_
)
:
    DimensionedFieldFunction<DimensionedFvPatchVectorField>(dff, field_),
    field(field_)
{}


Foam::autoPtr<Foam::DimensionedFieldFunction<Foam::DimensionedFvPatchVectorField>>
Foam::DimensionedFieldFunctions::
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField::
clone
(
    DimensionedFvPatchVectorField& field_
) const
{
    return autoPtr<DimensionedFieldFunction<DimensionedFvPatchVectorField>>
    (
        new U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField
        (
            *this,
            field_
        )
    );
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

Foam::DimensionedFieldFunctions::
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField::
~U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField()
{
    if (false)
    {
        Info<< "Destroy U_value_inlet sha1: 345a5c629a9b2228817acb6eace04ec420dc0eae\n";
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void Foam::DimensionedFieldFunctions::
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField::evaluate()
{
    using namespace dimensions;

    // Local reference to time
    const dimensionedScalar& t(field.time());
    ignore(t);

    // Local reference to the field value locations
    // (points, cell centres, face centres)
    const DimensionedField<vector, GeoMesh, Field>& C(field.mesh().C());
    ignore(C);

//{{{ begin code
    #line 24 "/home/gurovamr/OpenFOAM/gurovamr-dev/run/TrackModule2/CFD-OpenFoam-basics/pipeCyclic/0/U/value"

        field = velocity(1, 0, 0) + (C ^ rate(2, 0, 0));
    
//}}} end code
}


void Foam::DimensionedFieldFunctions::
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField::update()
{
    using namespace dimensions;

//{{{ begin code
    
//}}} end code
}


void Foam::DimensionedFieldFunctions::
U_value_inletDimensionedFieldFunctionDimensionedFvPatchVectorField::
write
(
    Ostream& os
) const
{
    NotImplemented;
}


// ************************************************************************* i/


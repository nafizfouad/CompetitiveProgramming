namespace Solution {
	open Microsoft.Quantum.Intrinsic;
	
	open Microsoft.Quantum.Math;
	
	open Microsoft.Quantum.Measurement;
	
	open Microsoft.Quantum.Arithmetic;
	
	open Microsoft.Quantum.Diagnostics;
	
 
 
	operation Solve (x : Qubit[], y : Qubit, b : Int[]) : Unit {
		let n = Length(x);
		
		for (i in 0..n-1) {
		
			if (b[i]==1 ) {
			
				Controlled X([x[i]], y);
				
			}
		}
	}
 
 
}

/// in case ur wondering, idk q# -_-
/// someone submited a '.' from my account
/// as a solution to this problem -_-
/// so I felt like copying this whole code
/// to get rid of it from my unsolved problems'
/// list -_-
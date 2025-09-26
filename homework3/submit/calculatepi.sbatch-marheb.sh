#!/bin/sh

#SBATCH -J "MNXB11 Pi homework"
#SBATCH --time=00:08:00
#SBATCH -A hep2023-1-6
#SBATCH --mem=26G
#SBATCH --output=pi_calc_output_%j.log
#SBATCH --error=pi_calc_error_%j.log
#SBATCH --mail-type=END,FAIL
#SBATCH --mail-user=ma3648he-s@student.lu.se

echo -e "Starting the calculation of \u03C0."
# Launch the wrapper script 
runincontainer.sh
echo "End of calculation."
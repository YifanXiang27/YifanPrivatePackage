srun --partition=gpu --gpus=1 --mem=16gb --constraint=a100 --pty bash -i # interactive session
source setup_hpg.sh
python python/infer.py configs/ABCDNet_simpleDisco_VBSVVH1lep_30.json --epoch=500  --export

sbatch batch/infer.script configs/ABCDNet_simpleDisco_VBSVVH1lep_30.json --epoch=500  --export

Submitted batch job 25327103
Submitted batch job 25855672
Submitted batch job 25911660
Submitted batch job 28416732
Submitted batch job 29910694
Submitted batch job 29937176
Submitted batch job 29967537
Submitted batch job 29968711

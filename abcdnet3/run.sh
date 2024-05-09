EPOCH=250
python python/infer.py configs/ABCDNet_simpleDisco_VBSVVH1lep_30.json --epoch=${EPOCH}
python python/infer.py configs/ABCDNet_simpleDisco_VBSVVH1lep_30.json --epoch=${EPOCH} --export


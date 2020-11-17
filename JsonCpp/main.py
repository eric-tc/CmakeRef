import json

results=[]
results_file = 'yolo/results_{}.json'.format("yolo")

for i in range(0,10,1):

    results.append({'image_id': i,
                            'category_id': i+1,
                            'bbox': [12, 23, 23, 23],
                            'score': float(0.98)})
    with open(results_file, 'w+') as f:
        f.write(json.dumps(results, indent=4))
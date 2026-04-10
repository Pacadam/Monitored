extends VideoStreamPlayer

func _ready():
	play()
	finished.connect(on_video_done)

func on_video_done():
	get_tree().change_scene_to_file("res://menu.tscn")

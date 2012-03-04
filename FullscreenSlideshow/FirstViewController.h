//
//  FirstViewController.h
//  FullscreenSlideshow
//
//  Created by Calico on 04.03.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController
< UIImagePickerControllerDelegate , UINavigationControllerDelegate>
{
	IBOutlet UIImageView *imageView;
}

@end

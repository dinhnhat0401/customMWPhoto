//
//  ViewController.h
//  CustomMWPhotoBrower
//
//  Created by Dinh Van Nhat on 5/11/16.
//  Copyright © 2016 Dinh Van Nhat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MWPhotoBrowser.h"

@interface ViewController : UIViewController<MWPhotoBrowserDelegate>
{
    NSMutableArray *_selections;
}
@property (nonatomic, strong) NSMutableArray *photos;
@property (nonatomic, strong) NSMutableArray *thumbs;
@property (nonatomic, strong) NSMutableArray *assets;

@end


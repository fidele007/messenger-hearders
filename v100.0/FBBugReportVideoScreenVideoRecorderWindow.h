/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIWindow.h>

@class UIView;

@interface FBBugReportVideoScreenVideoRecorderWindow : UIWindow {

	UIView* _viewForRendering;
	UIView* _viewForRecordingUI;

}

@property (assign,nonatomic,__weak) UIView * viewForRendering;                //@synthesize viewForRendering=_viewForRendering - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewForRecordingUI;              //@synthesize viewForRecordingUI=_viewForRecordingUI - In the implementation block
-(void)setViewForRendering:(UIView *)arg1 ;
-(void)setViewForRecordingUI:(UIView *)arg1 ;
-(UIView *)viewForRendering;
-(UIView *)viewForRecordingUI;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

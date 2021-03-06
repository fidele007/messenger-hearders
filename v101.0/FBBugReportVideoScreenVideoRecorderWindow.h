/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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


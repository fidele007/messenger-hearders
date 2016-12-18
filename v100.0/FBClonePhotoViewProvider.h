/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDisplayableMediaViewProvider.h>

@protocol FBClonePhotoViewProviderDelegate, FBClonePhotoView;
@class UIView, NSString;

@interface FBClonePhotoViewProvider : NSObject <FBDisplayableMediaViewProvider> {

	id<FBClonePhotoViewProviderDelegate> _delegate;
	BOOL _didAddInfo;
	UIView*<FBClonePhotoView> _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)needsMediaViewInfoForSourceInfo:(id)arg1 sender:(id)arg2 ;
-(void)didAddMediaViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(void)willFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(void)didFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
@end


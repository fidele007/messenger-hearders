/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemPhoto, FBAnalyticsPerfLogger;

@interface FBPhotoViewControllerSpinnerLogger : NSObject {

	FBMemPhoto* _currentPhoto;
	unsigned long long _numberOfPhotosQueued;
	FBAnalyticsPerfLogger* _perfLogger;

}
-(BOOL)eventStarted;
-(void)_stopEventWithStatus:(id)arg1 spinnerWasShown:(BOOL)arg2 ;
-(id)initWithPerfLogger:(id)arg1 ;
-(void)expectSpinnerEndForPhoto:(id)arg1 openingSource:(id)arg2 ;
-(void)spinnerEndForPhoto:(id)arg1 status:(id)arg2 spinnerWasShown:(BOOL)arg3 ;
-(void)cancel;
@end

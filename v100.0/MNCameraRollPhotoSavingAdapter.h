/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPhotoSaving.h>

@protocol MNSavePhotoListener;
@class NSString;

@interface MNCameraRollPhotoSavingAdapter : NSObject <MNPhotoSaving> {

	NSString* _albumName;
	id<MNSavePhotoListener> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSavePhotoListener> delegate; 
-(void)saveStaticImage:(id)arg1 ;
-(void)saveAnimatedImageData:(id)arg1 ;
-(id)initWithAlbumName:(id)arg1 ;
-(void)setDelegate:(id<MNSavePhotoListener>)arg1 ;
-(id<MNSavePhotoListener>)delegate;
@end


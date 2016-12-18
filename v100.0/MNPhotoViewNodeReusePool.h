/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class MNObjectReusePool, MNPhotoViewNodeConfiguration, NSString;

@interface MNPhotoViewNodeReusePool : NSObject <FBViewerContextClassProvidable> {

	MNObjectReusePool* _reusePool;
	MNPhotoViewNodeConfiguration* _photoViewNodeConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)dequeuePhotoViewNodeForModel:(id)arg1 ;
-(void)recyclePhotoViewNode:(id)arg1 ;
-(void)purge;
@end


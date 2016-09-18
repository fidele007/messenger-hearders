/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class MNBatchProfileImageFetcher, MNCDNProfileImageDownloader, NSMutableDictionary, FBImageDownloader, NSString;

@interface MNProfileImageViewController : NSObject <FBClassProvidable> {

	MNBatchProfileImageFetcher* _batchProfileImageFetcher;
	MNCDNProfileImageDownloader* _cdnProfileImageFetcher;
	NSMutableDictionary* _profileImageInfoToPendingRequests;
	FBImageDownloader* _imageDownloader;
	BOOL _shouldAnimateProfileImagesTransition;

}

@property (assign,nonatomic) BOOL shouldAnimateProfileImagesTransition;              //@synthesize shouldAnimateProfileImagesTransition=_shouldAnimateProfileImagesTransition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setImagesFromProfileImageModel:(id)arg1 toProfileImageView:(id)arg2 ;
-(void)profileImageViewWillAppear:(id)arg1 ;
-(void)profileImageViewWillDisappear:(id)arg1 ;
-(void)_fetchProfileImageForProfileImageViewWithFbid:(id)arg1 profileImageModel:(id)arg2 fbid:(id)arg3 profileImageSize:(unsigned long long)arg4 ;
-(void)_fetchProfileImagesForProfileImageView:(id)arg1 profileImageModel:(id)arg2 identifiers:(id)arg3 profileImageSize:(unsigned long long)arg4 ;
-(id)_pendingRequestForProfileImageModel:(id)arg1 ;
-(BOOL)shouldAnimateProfileImagesTransition;
-(void)setShouldAnimateProfileImagesTransition:(BOOL)arg1 ;
-(void)dealloc;
@end

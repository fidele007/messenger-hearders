/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASImageNode.h>

@protocol ASImageCacheProtocolASImageCacheProtocolDeprecated, ASImageDownloaderProtocolASImageDownloaderProtocolDeprecated, ASNetworkImageNodeDelegate;
@class NSURL, UIImage, NSUUID, ASDisplayNode;

@interface ASNetworkImageNode : ASImageNode {

	id<ASImageCacheProtocol><ASImageCacheProtocolDeprecated> _cache;
	id<ASImageDownloaderProtocol><ASImageDownloaderProtocolDeprecated> _downloader;
	id<ASNetworkImageNodeDelegate> _delegate;
	NSURL* _URL;
	UIImage* _defaultImage;
	NSUUID* _cacheUUID;
	id _downloadIdentifier;
	BOOL _imageLoaded;
	double _currentImageQuality;
	double _renderedImageQuality;
	BOOL _shouldRenderProgressImages;
	ASDisplayNode* _dummyNode;
	delegateOptionalProtocolResponseFlags _delegateFlags;
	delegateOptionalProtocolResponseFlags _downloaderFlags;
	struct {
		unsigned cacheSupportsNewProtocol : 1;
		unsigned cacheSupportsClearing : 1;
		unsigned cacheSupportsSynchronousFetch : 1;
	}  _cacheFlags;
	BOOL _shouldCacheImage;

}

@property (__weak) id<ASNetworkImageNodeDelegate> delegate; 
@property (retain) UIImage * defaultImage; 
@property (retain) NSURL * URL; 
@property (assign,nonatomic) BOOL shouldCacheImage;                        //@synthesize shouldCacheImage=_shouldCacheImage - In the implementation block
@property (assign,nonatomic) BOOL shouldRenderProgressImages; 
@property (nonatomic,readonly) double currentImageQuality; 
@property (nonatomic,readonly) double renderedImageQuality; 
-(void)_staticInitialize;
-(id)initWithImageDownloader:(id)arg1 ;
-(id)initWithCache:(id)arg1 downloader:(id)arg2 ;
-(void)displayWillStart;
-(void)displayDidFinish;
-(void)_cancelImageDownload;
-(void)setURL:(id)arg1 resetToDefault:(BOOL)arg2 ;
-(void)setCurrentImageQuality:(double)arg1 ;
-(void)_updateProgressImageBlockOnDownloaderIfNeeded;
-(void)visibleStateDidChange:(BOOL)arg1 ;
-(void)clearFetchedData;
-(void)_clearImage;
-(void)_lazilyLoadImageIfNecessary;
-(BOOL)shouldCacheImage;
-(void)_downloadImageWithCompletion:(/*^block*/id)arg1 ;
-(double)currentImageQuality;
-(void)setRenderedImageQuality:(double)arg1 ;
-(double)renderedImageQuality;
-(void)setShouldRenderProgressImages:(BOOL)arg1 ;
-(BOOL)shouldRenderProgressImages;
-(BOOL)placeholderShouldPersist;
-(void)setShouldCacheImage:(BOOL)arg1 ;
-(void)setDelegate:(id<ASNetworkImageNodeDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ASNetworkImageNodeDelegate>)delegate;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)fetchData;
-(UIImage *)defaultImage;
-(void)setDefaultImage:(UIImage *)arg1 ;
@end


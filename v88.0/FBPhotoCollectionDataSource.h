/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPhotoCollectionDataSource.h>
@class FBMemPhoto, FBPhotoUpdater;


@protocol FBPhotoCollectionDataSource
@property (nonatomic,readonly) BOOL hasMoreToSync; 
@property (nonatomic,readonly) FBMemPhoto * photo; 
@property (assign,nonatomic) BOOL selectedPhotoIsInvalid; 
@property (assign,nonatomic) unsigned long long photoIndex; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) FBPhotoUpdater * photoUpdater; 
@required
-(void)setPhotoIndex:(unsigned long long)arg1;
-(unsigned long long)photoIndex;
-(void)setSelectedPhotoIsInvalid:(BOOL)arg1;
-(BOOL)hasMoreToSync;
-(BOOL)selectedPhotoIsInvalid;
-(FBPhotoUpdater *)photoUpdater;
-(unsigned long long)photosCount;
-(FBMemPhoto *)photo;

@end


@class FBMemPhoto, FBPhotoUpdater, NSHashTable, NSString;

@interface FBPhotoCollectionDataSource : NSObject <FBPhotoCollectionDataSource> {

	BOOL _supportsMultimedia;
	NSHashTable* _listeners;
	NSString* _photosSource;

}

@property (nonatomic,readonly) NSHashTable * listeners;                     //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,copy) NSString * photosSource;                         //@synthesize photosSource=_photosSource - In the implementation block
@property (assign,nonatomic) BOOL supportsMultimedia;                       //@synthesize supportsMultimedia=_supportsMultimedia - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreToSync; 
@property (nonatomic,readonly) FBMemPhoto * photo; 
@property (assign,nonatomic) BOOL selectedPhotoIsInvalid; 
@property (assign,nonatomic) unsigned long long photoIndex; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) FBPhotoUpdater * photoUpdater; 
-(void)setPhotoIndex:(unsigned long long)arg1 ;
-(unsigned long long)photoIndex;
-(void)setSelectedPhotoIsInvalid:(BOOL)arg1 ;
-(id)fullySyncIndexes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)photosSource;
-(BOOL)hasMoreToSync;
-(void)syncMore:(/*^block*/id)arg1 ;
-(void)syncMoreNow:(/*^block*/id)arg1 ;
-(BOOL)selectedPhotoIsInvalid;
-(BOOL)supportsMultimedia;
-(void)setSupportsMultimedia:(BOOL)arg1 ;
-(FBPhotoUpdater *)photoUpdater;
-(id)initWithMediaStore:(id)arg1 session:(id)arg2 selectedPhotoIndex:(unsigned long long)arg3 ;
-(void)setPhotosSource:(NSString *)arg1 ;
-(id)init;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)photosCount;
-(FBMemPhoto *)photo;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSHashTable *)listeners;
@end


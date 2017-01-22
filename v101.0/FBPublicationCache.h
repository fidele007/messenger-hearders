/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBActivePublicationsChangeListener.h>

@protocol FBPublicationCacheListener, FBKeyValueObjectStore;
@class NSMutableDictionary, NSString;

@interface FBPublicationCache : NSObject <FBActivePublicationsChangeListener> {

	NSMutableDictionary* _cacheablePublisherDataByCompositionID;
	BOOL _hasRestartedUnpublishedPublishersFromCache;
	id<FBPublicationCacheListener> _listener;
	id<FBKeyValueObjectStore> _objectStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_successfullyLoadedObject:(id)arg1 ;
-(id)initWithObjectStore:(id)arg1 listener:(id)arg2 ;
-(void)loadPublications;
-(void)scheduleCacheSave;
-(void)addedPublicationWithPublisherData:(id)arg1 ;
-(void)removedPublicationWithPublisherData:(id)arg1 ;
-(void)updatedPublication:(id)arg1 ;
@end

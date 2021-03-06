/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSOperationQueue;

@interface FBPhotoMetadataDatabase : NSObject {

	int _corruption_trap1;
	int _corruption_trap2;
	sqlite3Ref _db;
	NSOperationQueue* _operationQueue;

}
+(id)sharedInstance;
-(sqlite3Ref)_openDbWithPath:(id)arg1 ;
-(void)_writeRow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestDataForIdentifier:(id)arg1 andProperty:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestIdentifierToSummaryMappingWithcompletion:(unsigned long long)arg1 completion:(/*^block*/id)arg2 useDouble:(BOOL)arg3 ;
-(void)_requestIdentifierToSummaryMappingForProperty:(unsigned long long)arg1 completion:(/*^block*/id)arg2 useDouble:(BOOL)arg3 ;
-(void)writeRow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestDataForIdentifier:(id)arg1 andProperty:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestIdentifierToIntegerSummaryMappingForProperty:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestIdentifierToDoubleSummaryMappingForProperty:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, NSError;

@interface MNSingleThreadSummaryResponse : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMThreadSummary* _threadFetched_threadSummary;
	NSError* _fetchingFailed_error;

}
+(id)fetchingFailedWithError:(id)arg1 ;
+(id)threadNotCreated;
+(id)threadFetchedWithThreadSummary:(id)arg1 ;
-(void)matchThreadFetched:(/*^block*/id)arg1 threadNotCreated:(/*^block*/id)arg2 fetchingFailed:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


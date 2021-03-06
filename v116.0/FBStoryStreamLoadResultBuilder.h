/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface FBStoryStreamLoadResultBuilder : NSObject {

	BOOL _cancelled;
	unsigned long long _edgeCount;
	NSString* _endCursor;
	NSError* _error;
	BOOL _hasNextPage;
	NSString* _startCursor;

}
+(id)aStreamLoadResult;
-(id)withCancelled:(BOOL)arg1 ;
-(id)withEdgeCount:(unsigned long long)arg1 ;
-(id)withEndCursor:(id)arg1 ;
-(id)withError:(id)arg1 ;
-(id)withHasNextPage:(BOOL)arg1 ;
-(id)withStartCursor:(id)arg1 ;
-(id)build;
@end


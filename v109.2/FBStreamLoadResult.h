/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface FBStreamLoadResult : NSObject {

	BOOL _hasPreviousPage;
	BOOL _hasNextPage;
	BOOL _cancelled;
	NSString* _startCursor;
	NSString* _endCursor;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSString * startCursor;              //@synthesize startCursor=_startCursor - In the implementation block
@property (nonatomic,copy,readonly) NSString * endCursor;                //@synthesize endCursor=_endCursor - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousPage;                     //@synthesize hasPreviousPage=_hasPreviousPage - In the implementation block
@property (nonatomic,readonly) BOOL hasNextPage;                         //@synthesize hasNextPage=_hasNextPage - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL cancelled;                           //@synthesize cancelled=_cancelled - In the implementation block
-(NSString *)endCursor;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 ;
-(id)initWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasPreviousPage:(BOOL)arg3 hasNextPage:(BOOL)arg4 ;
-(id)description;
-(BOOL)cancelled;
-(BOOL)hasNextPage;
-(BOOL)hasPreviousPage;
-(NSError *)error;
-(NSString *)startCursor;
@end


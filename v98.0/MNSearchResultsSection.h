/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNSearchResultsSection : FBValueObject <NSCopying> {

	BOOL _hasPendingRequest;
	NSArray* _rows;
	long long _originalSection;

}

@property (nonatomic,readonly) BOOL hasPendingRequest;                 //@synthesize hasPendingRequest=_hasPendingRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rows;                    //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) long long originalSection;              //@synthesize originalSection=_originalSection - In the implementation block
-(long long)originalSection;
-(id)initWithHasPendingRequest:(BOOL)arg1 rows:(id)arg2 originalSection:(long long)arg3 ;
-(BOOL)hasPendingRequest;
-(NSArray *)rows;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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


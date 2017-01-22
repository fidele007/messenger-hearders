/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerPostCompositionItemComponentState : FBValueObject <NSCopying> {

	BOOL _isBeingTapped;
	NSString* _expandedDescription;

}

@property (nonatomic,readonly) BOOL isBeingTapped;                               //@synthesize isBeingTapped=_isBeingTapped - In the implementation block
@property (nonatomic,copy,readonly) NSString * expandedDescription;              //@synthesize expandedDescription=_expandedDescription - In the implementation block
-(id)initWithIsBeingTapped:(BOOL)arg1 expandedDescription:(id)arg2 ;
-(BOOL)isBeingTapped;
-(NSString *)expandedDescription;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBGraphQLConnectionStoreStateTransitions : FBValueObject <NSCopying> {

	NSArray* _transitions;
	id _returnValue;

}

@property (nonatomic,copy,readonly) NSArray * transitions;              //@synthesize transitions=_transitions - In the implementation block
@property (nonatomic,copy,readonly) id returnValue;                     //@synthesize returnValue=_returnValue - In the implementation block
-(id)initWithTransitions:(id)arg1 returnValue:(id)arg2 ;
-(NSArray *)transitions;
-(id)returnValue;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBLocationSubscriber : FBValueObject <NSCopying> {

	NSString* _context;
	double _accuracy;

}

@property (nonatomic,copy,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) double accuracy;                      //@synthesize accuracy=_accuracy - In the implementation block
-(id)initWithContext:(id)arg1 accuracy:(double)arg2 ;
-(NSString *)context;
-(double)accuracy;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMontageMessageViewModel, MNMontageNuxMessage;

@interface MNMontageViewMessageWrapper : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNMontageMessageViewModel* _viewModel;
	MNMontageNuxMessage* _nux_nux;
	unsigned long long _nux_index;

}
+(id)viewModel:(id)arg1 ;
+(id)nuxWithNux:(id)arg1 index:(unsigned long long)arg2 ;
-(void)matchViewModel:(/*^block*/id)arg1 nux:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBFilmStripViewCellModel : NSObject {

	CGSize _size;
	SCD_Struct_FB33 _time;

}

@property (nonatomic,readonly) SCD_Struct_FB33 time;              //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) CGSize size;                       //@synthesize size=_size - In the implementation block
-(id)initWithTime:(SCD_Struct_FB33)arg1 size:(CGSize)arg2 ;
-(CGSize)size;
-(SCD_Struct_FB33)time;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableArray, FBGLContext, FBFilter;

@interface FBRenderer : NSObject {

	NSMutableArray* _outputs;
	FBGLContext* _context;
	FBFilter* _filter;

}

@property (nonatomic,readonly) FBGLContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FBFilter * filter;                    //@synthesize filter=_filter - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 time:(SCD_Struct_FB25)arg3 ;
-(id)renderByConsumingSource:(id)arg1 ;
-(void)renderTo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
-(FBGLContext *)context;
-(void)setFilter:(FBFilter *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(void)render;
-(FBFilter *)filter;
-(void)render:(id)arg1 ;
@end


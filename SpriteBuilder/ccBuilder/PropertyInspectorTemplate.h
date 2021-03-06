//
//  PropertyInspectorTemplate.h
//  CocosBuilder
//
//  Created by Viktor on 7/30/13.
//
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface PropertyInspectorTemplate : NSObject

@property (nonatomic,copy) NSString* name;
@property (nonatomic,retain) NSImage* image;
@property (nonatomic,copy) NSString* nodeType;
@property (nonatomic,retain) NSColor* color;
@property (nonatomic,retain) NSArray* properties;

- (id) initWithNode:(CCNode*)node name:(NSString*)n bgColor:(NSColor*)c;
- (void) applyToNode:(CCNode*) node;

@end

@interface PropertyInspectorTemplateLibrary : NSObject
{
    NSMutableDictionary* library;
}

- (void) loadLibrary;
- (void) store;

- (void) addTemplate:(PropertyInspectorTemplate*)templ;
- (void) removeTemplate:(PropertyInspectorTemplate*)templ;
- (NSArray*) templatesForNodeType:(NSString*) nodeType;
- (BOOL) hasTemplateForNodeType:(NSString*)type andName:(NSString*)name;

+ (NSString*) templateDirectory;

@end





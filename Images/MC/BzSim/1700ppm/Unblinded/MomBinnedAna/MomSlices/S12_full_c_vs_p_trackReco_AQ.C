void S12_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 18 00:07:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-420.75,-4.171537,3456.75,0.8344086);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1117[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1117[15] = {
   -2.442107,
   -2.853816,
   -1.499151,
   -0.6574026,
   -0.4380454,
   -0.3488786,
   -0.269318,
   -0.218433,
   -0.148595,
   -0.1414146,
   -0.08387276,
   -0.1701992,
   -0.03575088,
   -0.08449188,
   -0.11918};
   Double_t Graph0_fex1117[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1117[15] = {
   0.8951059,
   0.1615526,
   0.05606524,
   0.04349768,
   0.03847304,
   0.03557676,
   0.03319356,
   0.03145502,
   0.030357,
   0.0303256,
   0.03116761,
   0.03294709,
   0.03583509,
   0.03625673,
   0.05066315};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1117,Graph0_fy1117,Graph0_fex1117,Graph0_fey1117);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01117 = new TH1F("Graph_Graph01117","S12",100,0,3300);
   Graph_Graph01117->SetMinimum(-3.670943);
   Graph_Graph01117->SetMaximum(0.3338139);
   Graph_Graph01117->SetDirectory(0);
   Graph_Graph01117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01117->SetLineColor(ci);
   Graph_Graph01117->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01117->GetXaxis()->SetRange(0,93);
   Graph_Graph01117->GetXaxis()->CenterTitle(true);
   Graph_Graph01117->GetXaxis()->SetLabelFont(42);
   Graph_Graph01117->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01117->GetXaxis()->SetTitleFont(42);
   Graph_Graph01117->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01117->GetYaxis()->CenterTitle(true);
   Graph_Graph01117->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01117->GetYaxis()->SetLabelFont(42);
   Graph_Graph01117->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01117->GetYaxis()->SetTitleFont(42);
   Graph_Graph01117->GetZaxis()->SetLabelFont(42);
   Graph_Graph01117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01117);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

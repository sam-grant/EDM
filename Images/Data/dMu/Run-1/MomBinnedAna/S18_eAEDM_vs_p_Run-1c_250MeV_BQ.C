void S18_eAEDM_vs_p_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 11:32:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(471.2579,-0.001062434,3018.413,0.1158531);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1080[11] = {
   456.247,
   653.5144,
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429,
   2782.043};
   Double_t Graph0_fy1080[11] = {
   0.1516584,
   0.03906498,
   0.02034907,
   0.01557665,
   0.01371481,
   0.01328555,
   0.01379549,
   0.01475424,
   0.01623641,
   0.01853801,
   0.06986275};
   Double_t Graph0_fex1080[11] = {
   0.1091934,
   0.07732065,
   0.05250078,
   0.04772049,
   0.04755709,
   0.05301721,
   0.06529801,
   0.08285997,
   0.1099856,
   0.1514908,
   0.2639107};
   Double_t Graph0_fey1080[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1080,Graph0_fy1080,Graph0_fex1080,Graph0_fey1080);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01080 = new TH1F("Graph_Graph01080","S18",100,223.5209,3014.924);
   Graph_Graph01080->SetMinimum(0.01062912);
   Graph_Graph01080->SetMaximum(0.1041615);
   Graph_Graph01080->SetDirectory(0);
   Graph_Graph01080->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01080->SetLineColor(ci);
   Graph_Graph01080->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01080->GetXaxis()->SetRange(19,91);
   Graph_Graph01080->GetXaxis()->CenterTitle(true);
   Graph_Graph01080->GetXaxis()->SetLabelFont(42);
   Graph_Graph01080->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01080->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01080->GetXaxis()->SetTitleFont(42);
   Graph_Graph01080->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01080->GetYaxis()->CenterTitle(true);
   Graph_Graph01080->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01080->GetYaxis()->SetLabelFont(42);
   Graph_Graph01080->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01080->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01080->GetYaxis()->SetTitleFont(42);
   Graph_Graph01080->GetZaxis()->SetLabelFont(42);
   Graph_Graph01080->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01080->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01080);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

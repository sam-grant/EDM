void S12_AEDMOverThetaYRMS_vs_p_trackRecoControl_WORLD_250MeV_CQ_noCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 20:26:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.4195,-0.01392811,3034.332,-0.002931326);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[12] = {
   189.0097,
   434.3781,
   652.5116,
   883.7782,
   1126.204,
   1373.8,
   1622.32,
   1870.781,
   2119.266,
   2366.747,
   2613.39,
   2824.544};
   Double_t Graph0_fy1064[12] = {
   -0.1090145,
   -0.01241911,
   -0.00328028,
   -0.005716662,
   -0.007050405,
   -0.009746236,
   -0.009713073,
   -0.01172637,
   -0.004979147,
   -0.01066745,
   -0.01061826,
   -0.01566605};
   Double_t Graph0_fex1064[12] = {
   0.9885242,
   0.2033246,
   0.1122319,
   0.07575547,
   0.07016162,
   0.07012019,
   0.07304142,
   0.07900586,
   0.08942676,
   0.105125,
   0.1324895,
   0.1653295};
   Double_t Graph0_fey1064[12] = {
   -0.03719701,
   -0.00571713,
   -0.002317419,
   -0.001514412,
   -0.001375596,
   -0.001374582,
   -0.001435151,
   -0.001551648,
   -0.001759243,
   -0.002065349,
   -0.002626944,
   -0.004486186};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S12_",100,0,3088.378);
   Graph_Graph01064->SetMinimum(-0.01282843);
   Graph_Graph01064->SetMaximum(-0.004031004);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(25,90);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

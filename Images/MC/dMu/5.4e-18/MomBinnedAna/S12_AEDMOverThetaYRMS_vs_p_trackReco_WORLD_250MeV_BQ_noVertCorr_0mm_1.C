void S12_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.3781,-0.02267767,3376.081,0.08286257);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1108[11] = {
   451.5498,
   653.3939,
   880.0628,
   1123.153,
   1371.24,
   1619.947,
   1867.163,
   2114.835,
   2362.441,
   2614.458,
   2788.038};
   Double_t Graph0_fy1108[11] = {
   0.00110894,
   0.008170631,
   0.005991048,
   0.006983388,
   0.01048121,
   0.007988013,
   0.01410061,
   0.007595515,
   0.01370484,
   0.01306389,
   0.05116325};
   Double_t Graph0_fex1108[11] = {
   0.1450545,
   0.1227995,
   0.08906524,
   0.08706518,
   0.09294933,
   0.1024967,
   0.1195046,
   0.1498014,
   0.1962366,
   0.2402987,
   0.30333};
   Double_t Graph0_fey1108[11] = {
   0.006196568,
   0.002519217,
   0.001761354,
   0.001705958,
   0.001823728,
   0.002017611,
   0.002352159,
   0.002951157,
   0.003852203,
   0.004871011,
   0.01410928};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1108,Graph0_fy1108,Graph0_fex1108,Graph0_fey1108);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01108 = new TH1F("Graph_Graph01108","S12_",100,217.7111,3022.035);
   Graph_Graph01108->SetMinimum(-0.01212364);
   Graph_Graph01108->SetMaximum(0.07230855);
   Graph_Graph01108->SetDirectory(0);
   Graph_Graph01108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01108->SetLineColor(ci);
   Graph_Graph01108->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01108->GetXaxis()->SetRange(0,100);
   Graph_Graph01108->GetXaxis()->CenterTitle(true);
   Graph_Graph01108->GetXaxis()->SetLabelFont(42);
   Graph_Graph01108->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01108->GetXaxis()->SetTitleFont(42);
   Graph_Graph01108->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01108->GetYaxis()->CenterTitle(true);
   Graph_Graph01108->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01108->GetYaxis()->SetLabelFont(42);
   Graph_Graph01108->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01108->GetYaxis()->SetTitleFont(42);
   Graph_Graph01108->GetZaxis()->SetLabelFont(42);
   Graph_Graph01108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01108);
   
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

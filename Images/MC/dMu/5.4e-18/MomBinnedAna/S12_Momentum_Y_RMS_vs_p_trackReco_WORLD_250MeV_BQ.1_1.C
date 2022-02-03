void S12_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6966,2.552753,3406.985,28.26836);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1102[11] = {
   451.637,
   653.3997,
   880.2817,
   1123.202,
   1371.221,
   1620.119,
   1867.021,
   2114.924,
   2362.277,
   2614.139,
   2787.456};
   Double_t Graph0_fy1102[11] = {
   13.92498,
   16.67529,
   18.59842,
   20.13145,
   21.08659,
   21.41415,
   21.22632,
   20.30352,
   18.64354,
   16.24141,
   13.6034};
   Double_t Graph0_fex1102[11] = {
   0.1894701,
   0.1594013,
   0.115333,
   0.112845,
   0.1201609,
   0.1327309,
   0.1547769,
   0.1936791,
   0.2519213,
   0.3112052,
   0.3843093};
   Double_t Graph0_fey1102[11] = {
   0.05625073,
   0.02730911,
   0.02123229,
   0.02229491,
   0.02490959,
   0.02800607,
   0.03238815,
   0.03875861,
   0.04647166,
   0.05115055,
   0.1242125};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1102,Graph0_fy1102,Graph0_fex1102,Graph0_fey1102);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01102 = new TH1F("Graph_Graph01102","S12_",100,217.8083,3021.48);
   Graph_Graph01102->SetMinimum(5.124314);
   Graph_Graph01102->SetMaximum(25.6968);
   Graph_Graph01102->SetDirectory(0);
   Graph_Graph01102->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01102->SetLineColor(ci);
   Graph_Graph01102->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01102->GetXaxis()->SetRange(0,101);
   Graph_Graph01102->GetXaxis()->CenterTitle(true);
   Graph_Graph01102->GetXaxis()->SetLabelFont(42);
   Graph_Graph01102->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01102->GetXaxis()->SetTitleFont(42);
   Graph_Graph01102->GetYaxis()->CenterTitle(true);
   Graph_Graph01102->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01102->GetYaxis()->SetLabelFont(42);
   Graph_Graph01102->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01102->GetYaxis()->SetTitleFont(42);
   Graph_Graph01102->GetZaxis()->SetLabelFont(42);
   Graph_Graph01102->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01102);
   
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

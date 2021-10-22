void S12S18_c_vs_p_slice_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:12 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-20.02518,3712.5,4.205215);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1395[15] = {
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
   Double_t Graph0_fy1395[15] = {
   -14.7935,
   -2.543741,
   -1.053564,
   -0.2565294,
   0.07577082,
   0.03675603,
   0.1025597,
   -0.07678964,
   -0.09269902,
   0.07891818,
   0.0100711,
   0.0006686236,
   0.04507157,
   -0.1242895,
   -0.15384};
   Double_t Graph0_fex1395[15] = {
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
   Double_t Graph0_fey1395[15] = {
   1.193286,
   0.335234,
   0.1178587,
   0.08861798,
   0.0774439,
   0.07028861,
   0.06425523,
   0.06005133,
   0.05666148,
   0.05427465,
   0.05403301,
   0.05418742,
   0.05611801,
   0.0603285,
   0.08886532};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1395,Graph0_fy1395,Graph0_fex1395,Graph0_fey1395);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01395 = new TH1F("Graph_Graph01395","S12S18",100,0,3300);
   Graph_Graph01395->SetMinimum(-17.60214);
   Graph_Graph01395->SetMaximum(1.782175);
   Graph_Graph01395->SetDirectory(0);
   Graph_Graph01395->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01395->SetLineColor(ci);
   Graph_Graph01395->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01395->GetXaxis()->CenterTitle(true);
   Graph_Graph01395->GetXaxis()->SetLabelFont(42);
   Graph_Graph01395->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01395->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01395->GetXaxis()->SetTitleFont(42);
   Graph_Graph01395->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01395->GetYaxis()->CenterTitle(true);
   Graph_Graph01395->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01395->GetYaxis()->SetLabelFont(42);
   Graph_Graph01395->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01395->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01395->GetYaxis()->SetTitleFont(42);
   Graph_Graph01395->GetZaxis()->SetLabelFont(42);
   Graph_Graph01395->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01395->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01395);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

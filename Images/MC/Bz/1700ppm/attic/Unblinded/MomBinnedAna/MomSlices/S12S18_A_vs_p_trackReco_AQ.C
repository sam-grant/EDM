void S12S18_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:12:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-1.273571,3712.5,1.766544);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1278[15] = {
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
   Double_t Graph0_fy1278[15] = {
   0.2464869,
   -0.2370919,
   0.113514,
   0.04179391,
   0.2518222,
   0.1595356,
   0.1954465,
   0.1918156,
   0.1513853,
   0.1454992,
   0.09525641,
   0.1744488,
   0.1448024,
   0.07037697,
   -0.05595276};
   Double_t Graph0_fex1278[15] = {
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
   Double_t Graph0_fey1278[15] = {
   1.013372,
   0.1646304,
   0.05601346,
   0.04341282,
   0.03840016,
   0.03549565,
   0.03319964,
   0.03149109,
   0.03050019,
   0.03056496,
   0.03158906,
   0.03374377,
   0.03628564,
   0.03674416,
   0.05184436};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1278,Graph0_fy1278,Graph0_fex1278,Graph0_fey1278);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01278 = new TH1F("Graph_Graph01278","S12S18",100,0,3300);
   Graph_Graph01278->SetMinimum(-0.9695592);
   Graph_Graph01278->SetMaximum(1.462533);
   Graph_Graph01278->SetDirectory(0);
   Graph_Graph01278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01278->SetLineColor(ci);
   Graph_Graph01278->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01278->GetXaxis()->CenterTitle(true);
   Graph_Graph01278->GetXaxis()->SetLabelFont(42);
   Graph_Graph01278->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01278->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01278->GetXaxis()->SetTitleFont(42);
   Graph_Graph01278->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01278->GetYaxis()->CenterTitle(true);
   Graph_Graph01278->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01278->GetYaxis()->SetLabelFont(42);
   Graph_Graph01278->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01278->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01278->GetYaxis()->SetTitleFont(42);
   Graph_Graph01278->GetZaxis()->SetLabelFont(42);
   Graph_Graph01278->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01278->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01278);
   
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

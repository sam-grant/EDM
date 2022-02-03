void S12_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4182,-5.25673,3406.946,60.10957);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1100[11] = {
   451.9295,
   653.2541,
   880.1027,
   1123.321,
   1371.175,
   1620.3,
   1867.055,
   2114.96,
   2362.495,
   2614.658,
   2787.332};
   Double_t Graph0_fy1100[11] = {
   30.81906,
   25.77617,
   21.259,
   18.00559,
   15.43647,
   13.22629,
   11.40586,
   9.603673,
   7.911024,
   6.23441,
   4.912405};
   Double_t Graph0_fex1100[11] = {
   0.2585753,
   0.2175793,
   0.1578323,
   0.1544094,
   0.1642786,
   0.1821068,
   0.2117136,
   0.2648624,
   0.3434608,
   0.4240096,
   0.523915};
   Double_t Graph0_fey1100[11] = {
   0.1703413,
   0.05774912,
   0.03318293,
   0.0272538,
   0.0249309,
   0.02369831,
   0.02379342,
   0.02509515,
   0.02691416,
   0.02673915,
   0.06092152};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1100,Graph0_fy1100,Graph0_fex1100,Graph0_fey1100);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01100 = new TH1F("Graph_Graph01100","S12_",100,218.0524,3021.475);
   Graph_Graph01100->SetMinimum(1.279901);
   Graph_Graph01100->SetMaximum(53.57294);
   Graph_Graph01100->SetDirectory(0);
   Graph_Graph01100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01100->SetLineColor(ci);
   Graph_Graph01100->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01100->GetXaxis()->SetRange(0,101);
   Graph_Graph01100->GetXaxis()->CenterTitle(true);
   Graph_Graph01100->GetXaxis()->SetLabelFont(42);
   Graph_Graph01100->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01100->GetXaxis()->SetTitleFont(42);
   Graph_Graph01100->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01100->GetYaxis()->CenterTitle(true);
   Graph_Graph01100->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01100->GetYaxis()->SetLabelFont(42);
   Graph_Graph01100->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01100->GetYaxis()->SetTitleFont(42);
   Graph_Graph01100->GetZaxis()->SetLabelFont(42);
   Graph_Graph01100->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01100);
   
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

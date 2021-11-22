void S12_c_vs_p_A_trackTruth_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:13:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-301.5203,-0.008388182,3332.186,0.01524277);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[12] = {
   199.6938,
   433.1149,
   628.51,
   873.0274,
   1121.693,
   1371.626,
   1620.292,
   1868.203,
   2116.519,
   2363.163,
   2613.773,
   2829.106};
   Double_t Graph0_fy1052[12] = {
   0.003427294,
   -1.365552e-05,
   -1.930799e-06,
   -1.154358e-06,
   -8.931933e-07,
   -1.125494e-06,
   -1.173112e-06,
   -1.1266e-06,
   -2.244382e-06,
   -3.513436e-06,
   -7.441438e-06,
   -3.87267e-05};
   Double_t Graph0_fex1052[12] = {
   2.06251,
   0.06941114,
   0.06342483,
   0.06383254,
   0.06845521,
   0.07384935,
   0.08111735,
   0.09276644,
   0.110902,
   0.1406175,
   0.186901,
   0.2380528};
   Double_t Graph0_fey1052[12] = {
   0.007876984,
   2.826485e-07,
   6.244204e-08,
   6.125983e-08,
   7.458408e-08,
   9.432403e-08,
   1.269691e-07,
   1.982571e-07,
   3.663249e-07,
   8.503751e-07,
   2.254802e-06,
   1.128459e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","S12_",100,0,3092.516);
   Graph_Graph01052->SetMinimum(-0.006025087);
   Graph_Graph01052->SetMaximum(0.01287967);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01052->GetXaxis()->SetRange(3,96);
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01052->GetYaxis()->CenterTitle(true);
   Graph_Graph01052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01052->GetYaxis()->SetLabelFont(42);
   Graph_Graph01052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01052->GetYaxis()->SetTitleFont(42);
   Graph_Graph01052->GetZaxis()->SetLabelFont(42);
   Graph_Graph01052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01052);
   
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

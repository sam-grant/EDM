void S12_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:37:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-301.5203,-13.70903,3332.186,3.132905);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1050[12] = {
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
   Double_t Graph0_fy1050[12] = {
   -10.90204,
   0.2566236,
   0.1809005,
   0.2208286,
   0.1772619,
   0.2049042,
   0.1859089,
   0.2236854,
   0.1558513,
   0.09742545,
   0.1227203,
   0.1214086};
   Double_t Graph0_fex1050[12] = {
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
   Double_t Graph0_fey1050[12] = {
   3.691863e-06,
   0.06929182,
   0.03478508,
   0.0285666,
   0.02579714,
   0.02368773,
   0.02228235,
   0.02188776,
   0.02210655,
   0.02319844,
   0.02411711,
   0.02865209};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01050 = new TH1F("Graph_Graph01050","S12_",100,0,3092.516);
   Graph_Graph01050->SetMinimum(-12.02484);
   Graph_Graph01050->SetMaximum(1.448711);
   Graph_Graph01050->SetDirectory(0);
   Graph_Graph01050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01050->SetLineColor(ci);
   Graph_Graph01050->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01050->GetXaxis()->SetRange(3,96);
   Graph_Graph01050->GetXaxis()->CenterTitle(true);
   Graph_Graph01050->GetXaxis()->SetLabelFont(42);
   Graph_Graph01050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetXaxis()->SetTitleFont(42);
   Graph_Graph01050->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01050->GetYaxis()->CenterTitle(true);
   Graph_Graph01050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01050->GetYaxis()->SetLabelFont(42);
   Graph_Graph01050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01050->GetYaxis()->SetTitleFont(42);
   Graph_Graph01050->GetZaxis()->SetLabelFont(42);
   Graph_Graph01050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01050);
   
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

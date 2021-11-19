void S12_c_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:37:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-301.5203,-6.028538,3332.186,13.09547);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[12] = {
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
   Double_t Graph0_fy1049[12] = {
   9.908133,
   -2.792063,
   -0.9848592,
   -0.5342002,
   -0.3272506,
   -0.2737187,
   -0.2145261,
   -0.1497352,
   -0.162465,
   -0.1047624,
   -0.08877699,
   -0.0983275};
   Double_t Graph0_fex1049[12] = {
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
   Double_t Graph0_fey1049[12] = {
   2.902663e-06,
   0.04914003,
   0.0246544,
   0.02022366,
   0.0182401,
   0.0167443,
   0.0158114,
   0.01563114,
   0.01599373,
   0.01723806,
   0.01874746,
   0.02404224};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S12_",100,0,3092.516);
   Graph_Graph01049->SetMinimum(-4.116137);
   Graph_Graph01049->SetMaximum(11.18307);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(3,96);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
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

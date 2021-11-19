void S12_c_vs_p_A_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:39:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.613195,-0.00238403,3233.408,0.001346501);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[11] = {
   451.9846,
   653.0519,
   880.3422,
   1123.184,
   1371.087,
   1620.69,
   1867.019,
   2115.054,
   2361.946,
   2614.81,
   2788.78};
   Double_t Graph0_fy1052[11] = {
   0.0006915917,
   -2.420324e-06,
   -9.860214e-06,
   -6.420734e-06,
   -8.14232e-06,
   -7.377481e-06,
   -8.791411e-06,
   -6.29805e-06,
   -2.866258e-05,
   -2.744324e-05,
   -0.001192258};
   Double_t Graph0_fex1052[11] = {
   0.240275,
   0.2045413,
   0.1479285,
   0.144788,
   0.1543929,
   0.169926,
   0.1986831,
   0.2486955,
   0.3213767,
   0.3981981,
   0.4964072};
   Double_t Graph0_fey1052[11] = {
   3.315363e-05,
   2.296931e-06,
   7.795866e-07,
   7.0867e-07,
   8.568924e-07,
   1.189149e-06,
   1.942274e-06,
   4.127535e-06,
   1.019568e-05,
   2.314075e-05,
   0.0005700172};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","S12_",100,217.9911,3023.03);
   Graph_Graph01052->SetMinimum(-0.002010977);
   Graph_Graph01052->SetMaximum(0.0009734474);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01052->GetXaxis()->SetRange(5,96);
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("c");
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

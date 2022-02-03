void S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0201,-4.841286,3406.608,56.5082);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1137[11] = {
   452.0609,
   653.2722,
   880.5507,
   1123.017,
   1370.779,
   1619.705,
   1866.411,
   2115.026,
   2363.263,
   2612.185,
   2787.396};
   Double_t Graph0_fy1137[11] = {
   28.51062,
   23.60223,
   19.37755,
   16.41702,
   14.09938,
   12.15125,
   10.41814,
   8.793388,
   7.282044,
   5.74191,
   4.552871};
   Double_t Graph0_fex1137[11] = {
   0.1193482,
   0.1008813,
   0.0726896,
   0.07092989,
   0.07614717,
   0.08434879,
   0.09945954,
   0.1250774,
   0.1642086,
   0.1964878,
   0.2503732};
   Double_t Graph0_fey1137[11] = {
   0.07287692,
   0.02441982,
   0.01392972,
   0.0114372,
   0.01054939,
   0.01010108,
   0.01022372,
   0.01083377,
   0.01176134,
   0.01154966,
   0.02779139};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1137,Graph0_fy1137,Graph0_fex1137,Graph0_fey1137);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01137 = new TH1F("Graph_Graph01137","S18_",100,218.3711,3021.216);
   Graph_Graph01137->SetMinimum(1.293662);
   Graph_Graph01137->SetMaximum(50.37325);
   Graph_Graph01137->SetDirectory(0);
   Graph_Graph01137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01137->SetLineColor(ci);
   Graph_Graph01137->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01137->GetXaxis()->SetRange(0,101);
   Graph_Graph01137->GetXaxis()->CenterTitle(true);
   Graph_Graph01137->GetXaxis()->SetLabelFont(42);
   Graph_Graph01137->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01137->GetXaxis()->SetTitleFont(42);
   Graph_Graph01137->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01137->GetYaxis()->CenterTitle(true);
   Graph_Graph01137->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01137->GetYaxis()->SetLabelFont(42);
   Graph_Graph01137->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01137->GetYaxis()->SetTitleFont(42);
   Graph_Graph01137->GetZaxis()->SetLabelFont(42);
   Graph_Graph01137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01137);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

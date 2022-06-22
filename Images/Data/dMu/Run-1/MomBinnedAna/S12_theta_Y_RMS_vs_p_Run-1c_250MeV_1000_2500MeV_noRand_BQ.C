void S12_theta_Y_RMS_vs_p_Run-1c_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:19:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.3306,2.589486,2705.598,25.51608);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[11] = {
   456.0682,
   656.0074,
   884.4573,
   1127.821,
   1373.756,
   1620.421,
   1867.222,
   2116.232,
   2359.713,
   2607.761,
   2783.387};
   Double_t Graph0_fy1043[11] = {
   31.5336,
   24.55117,
   19.53307,
   16.71131,
   14.57666,
   12.65373,
   10.70469,
   8.99769,
   7.452812,
   5.998555,
   5.475725};
   Double_t Graph0_fex1043[11] = {
   0.09254913,
   0.06427831,
   0.04202861,
   0.03799096,
   0.03698021,
   0.04060174,
   0.04876292,
   0.06107452,
   0.07914503,
   0.1109786,
   0.185339};
   Double_t Graph0_fey1043[11] = {
   0.06591855,
   0.0164423,
   0.008212998,
   0.006205032,
   0.005339458,
   0.005091272,
   0.005147456,
   0.005412905,
   0.005904304,
   0.006891059,
   0.02571131};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S12",100,223.216,3016.332);
   Graph_Graph01043->SetMinimum(4.882146);
   Graph_Graph01043->SetMaximum(23.22342);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01043->GetXaxis()->SetRange(28,82);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

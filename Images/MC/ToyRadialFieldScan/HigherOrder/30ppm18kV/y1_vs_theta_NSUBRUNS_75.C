void y1_vs_theta_NSUBRUNS_75()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:53 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,0.4493818,443.8125,0.9148089);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1007[24] = {
   0.6653082,
   0.6450339,
   0.6302432,
   0.6223329,
   0.6214532,
   0.6266019,
   0.6359772,
   0.6474892,
   0.6592913,
   0.6701902,
   0.6798322,
   0.6886222,
   0.6974123,
   0.7070542,
   0.7179532,
   0.7297552,
   0.7412672,
   0.7506425,
   0.7557912,
   0.7549115,
   0.7470012,
   0.7322105,
   0.7119363,
   0.6886222};
   Double_t Graph0_fex1007[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1007[24] = {
   0.07621562,
   0.1021625,
   0.08674979,
   0.08650519,
   0.09450026,
   0.08609591,
   0.08416018,
   0.08677797,
   0.0912157,
   0.08448729,
   0.07914944,
   0.07682219,
   0.07025395,
   0.08015048,
   0.08319205,
   0.0863726,
   0.08268632,
   0.07573494,
   0.07135327,
   0.0823262,
   0.08777327,
   0.09033616,
   0.08129365,
   0.08379178};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("75 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","75 sub-runs",100,0,394.5);
   Graph_Graph01007->SetMinimum(0.4959245);
   Graph_Graph01007->SetMaximum(0.8682662);
   Graph_Graph01007->SetDirectory(0);
   Graph_Graph01007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01007->SetLineColor(ci);
   Graph_Graph01007->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01007->GetXaxis()->CenterTitle(true);
   Graph_Graph01007->GetXaxis()->SetLabelFont(42);
   Graph_Graph01007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetXaxis()->SetTitleFont(42);
   Graph_Graph01007->GetYaxis()->SetTitle("#LTy_{1}#GT [mm]");
   Graph_Graph01007->GetYaxis()->CenterTitle(true);
   Graph_Graph01007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01007->GetYaxis()->SetLabelFont(42);
   Graph_Graph01007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetYaxis()->SetTitleFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelFont(42);
   Graph_Graph01007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01007);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("75 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

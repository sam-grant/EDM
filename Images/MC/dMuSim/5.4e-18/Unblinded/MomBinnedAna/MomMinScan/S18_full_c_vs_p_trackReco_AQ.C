void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:25:38 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.4764348,3468.85,0.151484);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1301[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1301[15] = {
   -0.3588698,
   -0.3587317,
   -0.3302415,
   -0.196883,
   -0.1720979,
   -0.1606014,
   -0.1335571,
   -0.1325124,
   -0.1114054,
   -0.09591302,
   -0.08466487,
   -0.105058,
   -0.09600702,
   -0.1024856,
   -0.005100322};
   Double_t Graph0_fex1301[15] = {
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
   Double_t Graph0_fey1301[15] = {
   0.01291183,
   0.012912,
   0.01287964,
   0.01271276,
   0.01261846,
   0.01271948,
   0.01303535,
   0.01362646,
   0.01453805,
   0.01591995,
   0.0178669,
   0.02064855,
   0.02460143,
   0.03099256,
   0.05193116};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1301,Graph0_fy1301,Graph0_fex1301,Graph0_fey1301);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01301 = new TH1F("Graph_Graph01301","S18",100,0,3080);
   Graph_Graph01301->SetMinimum(-0.4136429);
   Graph_Graph01301->SetMaximum(0.08869209);
   Graph_Graph01301->SetDirectory(0);
   Graph_Graph01301->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01301->SetLineColor(ci);
   Graph_Graph01301->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01301->GetXaxis()->SetRange(0,100);
   Graph_Graph01301->GetXaxis()->CenterTitle(true);
   Graph_Graph01301->GetXaxis()->SetLabelFont(42);
   Graph_Graph01301->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01301->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01301->GetXaxis()->SetTitleFont(42);
   Graph_Graph01301->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01301->GetYaxis()->CenterTitle(true);
   Graph_Graph01301->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01301->GetYaxis()->SetLabelFont(42);
   Graph_Graph01301->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01301->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01301->GetYaxis()->SetTitleFont(42);
   Graph_Graph01301->GetZaxis()->SetLabelFont(42);
   Graph_Graph01301->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01301);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

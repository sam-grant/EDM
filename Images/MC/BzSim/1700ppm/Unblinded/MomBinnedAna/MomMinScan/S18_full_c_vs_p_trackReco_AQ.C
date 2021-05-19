void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 18 00:07:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-535,-0.5845214,3335,0.1823219);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1245[15] = {
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
   Double_t Graph0_fy1245[15] = {
   -0.4436953,
   -0.4431831,
   -0.4074854,
   -0.2757687,
   -0.2253608,
   -0.1915224,
   -0.160811,
   -0.1367795,
   -0.1184662,
   -0.1321767,
   -0.1254624,
   -0.08128786,
   -0.07659118,
   -0.08296317,
   0.002848353};
   Double_t Graph0_fex1245[15] = {
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
   Double_t Graph0_fey1245[15] = {
   0.01301885,
   0.01301883,
   0.01298441,
   0.01280627,
   0.01271089,
   0.01281267,
   0.01313276,
   0.0137113,
   0.01464133,
   0.01600485,
   0.01799662,
   0.02080969,
   0.02464798,
   0.03127457,
   0.05166636};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1245,Graph0_fy1245,Graph0_fex1245,Graph0_fey1245);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01245 = new TH1F("Graph_Graph01245","S18",100,-400,3200);
   Graph_Graph01245->SetMinimum(-0.5078371);
   Graph_Graph01245->SetMaximum(0.1056376);
   Graph_Graph01245->SetDirectory(0);
   Graph_Graph01245->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01245->SetLineColor(ci);
   Graph_Graph01245->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01245->GetXaxis()->SetRange(8,93);
   Graph_Graph01245->GetXaxis()->CenterTitle(true);
   Graph_Graph01245->GetXaxis()->SetLabelFont(42);
   Graph_Graph01245->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01245->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01245->GetXaxis()->SetTitleFont(42);
   Graph_Graph01245->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01245->GetYaxis()->CenterTitle(true);
   Graph_Graph01245->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01245->GetYaxis()->SetLabelFont(42);
   Graph_Graph01245->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01245->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01245->GetYaxis()->SetTitleFont(42);
   Graph_Graph01245->GetZaxis()->SetLabelFont(42);
   Graph_Graph01245->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01245->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01245);
   
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

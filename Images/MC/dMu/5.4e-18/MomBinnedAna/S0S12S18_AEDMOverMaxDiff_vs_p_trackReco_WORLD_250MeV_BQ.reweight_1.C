void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:52:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3996,-0.003768959,3407.527,0.003293891);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1218[11] = {
   451.8592,
   653.3031,
   880.3064,
   1123.077,
   1371.079,
   1620.197,
   1866.983,
   2115.419,
   2362.996,
   2613.822,
   2788.198};
   Double_t Graph0_fy1218[11] = {
   0.0001079058,
   0.0008853774,
   0.0008815329,
   0.00102547,
   0.001211592,
   0.00144708,
   0.001637579,
   0.001595673,
   0.001209441,
   0.00217099,
   0.0004451884};
   Double_t Graph0_fex1218[11] = {
   0.07208649,
   0.0609111,
   0.04412965,
   0.04310089,
   0.04602564,
   0.05089827,
   0.05933135,
   0.07372534,
   0.09524054,
   0.1166558,
   0.1421259};
   Double_t Graph0_fey1218[11] = {
   0.0005197814,
   0.0002022555,
   0.0001365208,
   0.0001307498,
   0.0001207856,
   0.0001260106,
   0.0001706483,
   0.000201788,
   0.0002659902,
   0.0003331078,
   0.001233563};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1218,Graph0_fy1218,Graph0_fex1218,Graph0_fey1218);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01218 = new TH1F("Graph_Graph01218","S0S12S18_",100,218.1318,3021.996);
   Graph_Graph01218->SetMinimum(-0.003062674);
   Graph_Graph01218->SetMaximum(0.002587606);
   Graph_Graph01218->SetDirectory(0);
   Graph_Graph01218->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01218->SetLineColor(ci);
   Graph_Graph01218->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01218->GetXaxis()->SetRange(0,101);
   Graph_Graph01218->GetXaxis()->CenterTitle(true);
   Graph_Graph01218->GetXaxis()->SetLabelFont(42);
   Graph_Graph01218->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01218->GetXaxis()->SetTitleFont(42);
   Graph_Graph01218->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01218->GetYaxis()->CenterTitle(true);
   Graph_Graph01218->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01218->GetYaxis()->SetLabelFont(42);
   Graph_Graph01218->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01218->GetYaxis()->SetTitleFont(42);
   Graph_Graph01218->GetZaxis()->SetLabelFont(42);
   Graph_Graph01218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01218->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01218);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

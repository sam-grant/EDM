void S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:33 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9195,-0.00795905,3509.275,0.0870997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1151[12] = {
   193.627,
   428.7209,
   630.9542,
   875.1418,
   1123.931,
   1373.172,
   1622.294,
   1870.639,
   2119.126,
   2366.724,
   2612.58,
   2825.157};
   Double_t Graph0_fy1151[12] = {
   0.02981768,
   0.001919785,
   0.004093367,
   0.007066713,
   0.009610112,
   0.00875993,
   0.01158689,
   0.01201832,
   0.01329215,
   0.01354712,
   0.01635337,
   0.01333399};
   Double_t Graph0_fex1151[12] = {
   0.3451501,
   0.06002813,
   0.04658121,
   0.04479511,
   0.0455383,
   0.04707298,
   0.04959316,
   0.05382871,
   0.06066495,
   0.07154502,
   0.09069372,
   0.1153877};
   Double_t Graph0_fey1151[12] = {
   0.01344067,
   0.001624991,
   0.0009283882,
   0.0008797042,
   0.000892235,
   0.0009222803,
   0.0009722263,
   0.001057064,
   0.00119244,
   0.001411592,
   0.001808108,
   0.003131161};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1151,Graph0_fy1151,Graph0_fex1151,Graph0_fey1151);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01151 = new TH1F("Graph_Graph01151","S18_",100,0,3088.471);
   Graph_Graph01151->SetMinimum(0.001546826);
   Graph_Graph01151->SetMaximum(0.07759382);
   Graph_Graph01151->SetDirectory(0);
   Graph_Graph01151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01151->SetLineColor(ci);
   Graph_Graph01151->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01151->GetXaxis()->SetRange(1,101);
   Graph_Graph01151->GetXaxis()->CenterTitle(true);
   Graph_Graph01151->GetXaxis()->SetLabelFont(42);
   Graph_Graph01151->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01151->GetXaxis()->SetTitleFont(42);
   Graph_Graph01151->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01151->GetYaxis()->CenterTitle(true);
   Graph_Graph01151->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01151->GetYaxis()->SetLabelFont(42);
   Graph_Graph01151->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01151->GetYaxis()->SetTitleFont(42);
   Graph_Graph01151->GetZaxis()->SetLabelFont(42);
   Graph_Graph01151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01151);
   
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

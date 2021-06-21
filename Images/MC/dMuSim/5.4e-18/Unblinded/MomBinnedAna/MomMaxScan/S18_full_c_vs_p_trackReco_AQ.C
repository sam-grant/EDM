void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.3557784,3550,0.9690895);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1327[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1327[12] = {
   0.1093495,
   0.1121095,
   0.1000068,
   0.07434256,
   0.0513647,
   0.01534039,
   0.009246611,
   0.03416544,
   0.05137532,
   0.002602011,
   0.05980447,
   0.424863};
   Double_t Graph0_fex1327[12] = {
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
   Double_t Graph0_fey1327[12] = {
   0.04439783,
   0.04514575,
   0.04754965,
   0.05095452,
   0.05563813,
   0.06226879,
   0.07172823,
   0.08572472,
   0.10621,
   0.1375691,
   0.1901859,
   0.3234152};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1327,Graph0_fy1327,Graph0_fex1327,Graph0_fey1327);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01327 = new TH1F("Graph_Graph01327","S18",100,580,3220);
   Graph_Graph01327->SetMinimum(-0.2232916);
   Graph_Graph01327->SetMaximum(0.8366027);
   Graph_Graph01327->SetDirectory(0);
   Graph_Graph01327->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01327->SetLineColor(ci);
   Graph_Graph01327->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01327->GetXaxis()->SetRange(1,100);
   Graph_Graph01327->GetXaxis()->CenterTitle(true);
   Graph_Graph01327->GetXaxis()->SetLabelFont(42);
   Graph_Graph01327->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01327->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01327->GetXaxis()->SetTitleFont(42);
   Graph_Graph01327->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01327->GetYaxis()->CenterTitle(true);
   Graph_Graph01327->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01327->GetYaxis()->SetLabelFont(42);
   Graph_Graph01327->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01327->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01327->GetYaxis()->SetTitleFont(42);
   Graph_Graph01327->GetZaxis()->SetLabelFont(42);
   Graph_Graph01327->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01327->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01327);
   
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

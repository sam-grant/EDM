void S12_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:57:58 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.03818012,3468.85,0.07075123);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1196[15] = {
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
   Double_t Graph0_fy1196[15] = {
   0.04463153,
   0.04486676,
   0.04453385,
   0.04348044,
   0.0421451,
   0.03685822,
   0.03711676,
   0.03448903,
   0.01943261,
   0.01999949,
   0.01625778,
   0.002906355,
   -0.006099637,
   0.0263687,
   0.01980956};
   Double_t Graph0_fex1196[15] = {
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
   Double_t Graph0_fey1196[15] = {
   0.007729486,
   0.007729239,
   0.007691093,
   0.007495742,
   0.007358465,
   0.007383073,
   0.007526906,
   0.007805784,
   0.008231608,
   0.008888338,
   0.009856056,
   0.01137753,
   0.01392526,
   0.01786914,
   0.03202831};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1196,Graph0_fy1196,Graph0_fex1196,Graph0_fey1196);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01196 = new TH1F("Graph_Graph01196","S12",100,0,3080);
   Graph_Graph01196->SetMinimum(-0.02728698);
   Graph_Graph01196->SetMaximum(0.05985809);
   Graph_Graph01196->SetDirectory(0);
   Graph_Graph01196->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01196->SetLineColor(ci);
   Graph_Graph01196->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01196->GetXaxis()->SetRange(0,100);
   Graph_Graph01196->GetXaxis()->CenterTitle(true);
   Graph_Graph01196->GetXaxis()->SetLabelFont(42);
   Graph_Graph01196->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01196->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01196->GetXaxis()->SetTitleFont(42);
   Graph_Graph01196->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01196->GetYaxis()->CenterTitle(true);
   Graph_Graph01196->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01196->GetYaxis()->SetLabelFont(42);
   Graph_Graph01196->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01196->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01196->GetYaxis()->SetTitleFont(42);
   Graph_Graph01196->GetZaxis()->SetLabelFont(42);
   Graph_Graph01196->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01196->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01196);
   
   gre->Draw("ap");
   
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

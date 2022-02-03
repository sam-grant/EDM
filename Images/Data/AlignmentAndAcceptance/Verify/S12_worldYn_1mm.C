void S12_worldYn_1mm()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 25 14:10:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-0.7500001,-0.5980131,9.75,-0.5397477);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t strawGeometry_worldCoordsYn_station12_fx5[16] = {
   1,
   1,
   2,
   2,
   3,
   3,
   4,
   4,
   5,
   5,
   6,
   6,
   7,
   7,
   8,
   8};
   Double_t strawGeometry_worldCoordsYn_station12_fy5[16] = {
   -0.5494586,
   -0.5494672,
   -0.5550954,
   -0.555104,
   -0.5607026,
   -0.5607112,
   -0.5662805,
   -0.5662891,
   -0.5718271,
   -0.5718357,
   -0.5773453,
   -0.5773539,
   -0.5828339,
   -0.5828425,
   -0.5882936,
   -0.5883022};
   TGraph *graph = new TGraph(16,strawGeometry_worldCoordsYn_station12_fx5,strawGeometry_worldCoordsYn_station12_fy5);
   graph->SetName("strawGeometry_worldCoordsYn_station12");
   graph->SetTitle("#plus1 mm offset from nominal");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_strawGeometry_worldCoordsYn_station125 = new TH1F("Graph_strawGeometry_worldCoordsYn_station125","#plus1 mm offset from nominal",100,0.3,8.7);
   Graph_strawGeometry_worldCoordsYn_station125->SetMinimum(-0.5921866);
   Graph_strawGeometry_worldCoordsYn_station125->SetMaximum(-0.5455743);
   Graph_strawGeometry_worldCoordsYn_station125->SetDirectory(0);
   Graph_strawGeometry_worldCoordsYn_station125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_strawGeometry_worldCoordsYn_station125->SetLineColor(ci);
   Graph_strawGeometry_worldCoordsYn_station125->GetXaxis()->SetTitle("Module number");
   Graph_strawGeometry_worldCoordsYn_station125->GetXaxis()->CenterTitle(true);
   Graph_strawGeometry_worldCoordsYn_station125->GetXaxis()->SetLabelFont(42);
   Graph_strawGeometry_worldCoordsYn_station125->GetXaxis()->SetTitleSize(0.04);
   Graph_strawGeometry_worldCoordsYn_station125->GetXaxis()->SetTitleOffset(1.1);
   Graph_strawGeometry_worldCoordsYn_station125->GetXaxis()->SetTitleFont(42);
   Graph_strawGeometry_worldCoordsYn_station125->GetYaxis()->SetTitle("World y-position [mm]");
   Graph_strawGeometry_worldCoordsYn_station125->GetYaxis()->CenterTitle(true);
   Graph_strawGeometry_worldCoordsYn_station125->GetYaxis()->SetNdivisions(4000510);
   Graph_strawGeometry_worldCoordsYn_station125->GetYaxis()->SetLabelFont(42);
   Graph_strawGeometry_worldCoordsYn_station125->GetYaxis()->SetTitleSize(0.04);
   Graph_strawGeometry_worldCoordsYn_station125->GetYaxis()->SetTitleOffset(1.2);
   Graph_strawGeometry_worldCoordsYn_station125->GetYaxis()->SetTitleFont(42);
   Graph_strawGeometry_worldCoordsYn_station125->GetZaxis()->SetLabelFont(42);
   Graph_strawGeometry_worldCoordsYn_station125->GetZaxis()->SetTitleOffset(1);
   Graph_strawGeometry_worldCoordsYn_station125->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_strawGeometry_worldCoordsYn_station125);
   
   graph->Draw("apl");
   
   TPaveText *pt = new TPaveText(0.2588442,0.94,0.7411558,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("#plus1 mm offset from nominal");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
